//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ORBTapGestureRecognizerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, ORBTapGestureRecognizer, PUICActionGroup, UIWindow;

@interface PUICActionController : NSObject <UIGestureRecognizerDelegate, ORBTapGestureRecognizerDelegate>
{
    ORBTapGestureRecognizer *_orbGestureRecognizer;
    float _progress;
    _Bool _isVisible;
    PUICActionGroup *_actionGroup;
    id <PUICActionControllerDelegate> _delegate;
    UIWindow *_actionWindow;
}

+ (void)dismissCurrentActionController;
+ (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
+ (id)_actionControllerOrbTapGestureRecognizer;
+ (void)_popActionControllerOrbGestureEnabled;
+ (void)_pushActionControllerOrbGestureEnabled:(_Bool)arg1 inWindow:(id)arg2;
+ (void)_initializeActionViewController;
+ (void)_initializeActionWindow;
+ (void)_setOrbGestureWindow:(id)arg1;
+ (void)_setActionControllerOrbGestureEnabled:(_Bool)arg1 inWindow:(id)arg2;
+ (void)ORBTapGestureRecognizerDidLatch:(id)arg1;
+ (void)_orbGestureRecognized:(id)arg1;
+ (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
+ (double)transitionDuration:(id)arg1;
+ (void)animateTransition:(id)arg1;
+ (id)animationControllerForDismissedController:(id)arg1;
+ (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
+ (id)interactionControllerForDismissal:(id)arg1;
+ (id)interactionControllerForPresentation:(id)arg1;
+ (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
+ (id)_currentActionController;
@property(retain, nonatomic) UIWindow *actionWindow; // @synthesize actionWindow=_actionWindow;
@property(nonatomic) __weak id <PUICActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUICActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *actionItems;
- (void)dismiss;
- (void)present;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (id)initWithActionItems:(id)arg1;
- (id)initWithActionGroup:(id)arg1;
- (void)presentWithORBTapGestureRecognizer:(id)arg1;
- (void)ORBTapGestureRecognizerDidLatch:(id)arg1;
- (void)_orbGestureDismiss:(id)arg1;
- (void)_cleanupAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dismissed:(CDUnknownBlockType)arg1;
- (void)_showActionsAnimated:(_Bool)arg1;
- (void)_deactivated;
- (void)_presented;
- (void)_addDismissGestureRecognizer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

