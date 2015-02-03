//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerInteractiveTransitioning.h"

@class NSString;

@interface PUICActionTransitionController : NSObject <UIViewControllerInteractiveTransitioning>
{
    id <UIViewControllerContextTransitioning> _context;
    CDUnknownBlockType _onDismissBlock;
    _Bool _isDismissing;
    _Bool _cancelled;
    _Bool _finished;
}

+ (id)dismissControllerWithOnDismissBlock:(CDUnknownBlockType)arg1;
+ (id)presentationController;
- (void).cxx_destruct;
- (void)_reset;
- (void)_endTransition:(_Bool)arg1;
- (void)finishTransition;
- (void)cancelTransition;
- (void)startInteractiveTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

