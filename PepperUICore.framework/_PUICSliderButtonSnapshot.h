//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface _PUICSliderButtonSnapshot : NSObject
{
    UIView *_snapshotView;
    long long _state;
    long long _touchTarget;
}

@property(nonatomic) long long touchTarget; // @synthesize touchTarget=_touchTarget;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void).cxx_destruct;
- (id)initWithTouchTarget:(long long)arg1;

@end

