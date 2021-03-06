//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPLocalApplicationProtocol.h"

@class NSHashTable, NSString, NSXPCConnection;

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol>
{
    _Bool _connectionIsValid;
    id <SPDeviceConnectionDelegate> _delegate;
    NSXPCConnection *_serverConnection;
    NSHashTable *_observers;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDeviceConnection;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property _Bool connectionIsValid; // @synthesize connectionIsValid=_connectionIsValid;
@property(retain) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(nonatomic) __weak id <SPDeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receiveData:(id)arg1;
- (void)_enumerateObserversSafely:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)wakeExtensionForWatchApp:(id)arg1;
- (id)localeForUserNotification;
- (void)hideUserNotification;
- (void)showUserNotification:(long long)arg1 bundleID:(id)arg2;
- (void)setLogLevel:(id)arg1;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelPendingInstallations;
- (void)installAllApplications;
- (void)fetchInstalledGlancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)createXPCConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

