#!/usr/bin/env ruby

require 'find'
require 'pathname'

xcode = ARGV[0] || "/Applications/Xcode-Beta.app/"

frameworks = Dir.glob('*.framework')
simulator_sdk = 'Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk'

Find.find(Pathname.new(xcode) + simulator_sdk) do |path|
	framework = File.basename(path)
	next unless frameworks.include?(framework)

	binary = File.basename(path, '.framework')
	`class-dump -H -o #{framework} #{path}/#{binary}`
end