//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUICStatusBar;

@interface PUICStatusBarGlobalContextViewAssertion : NSObject
{
    _Bool _animated;
    double _animationDuration;
    PUICStatusBar *_statusBar;
}

@property(nonatomic) __weak PUICStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;
- (id)init;

@end

