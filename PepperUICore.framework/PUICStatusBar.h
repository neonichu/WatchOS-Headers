//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIStatusBar.h"

#import "PUICStatusBarAppContextViewDelegate.h"
#import "PUICStatusBarAppContextViewObserver.h"

@class NSString, PUICStatusBarAppContextView, PUICStatusBarGlobalContextView, PUICStatusBarGlobalContextViewAssertion, UIStatusBarWindow, UIViewController;

@interface PUICStatusBar : UIStatusBar <PUICStatusBarAppContextViewObserver, PUICStatusBarAppContextViewDelegate>
{
    unsigned int _appContextViewAssertionCount;
    unsigned int _globalContextViewAssertionCount;
    double _labelOffset;
    PUICStatusBarAppContextView *_appContextView;
    PUICStatusBarGlobalContextView *_globalContextView;
    id <PUICStatusBarAppContextViewDataSource> _explicitDataSource;
    _Bool _needsAppContextUpdate;
    _Bool _animatedAppContextUpdate;
    PUICStatusBarGlobalContextViewAssertion *_globalContextAssertion;
    _Bool _shouldAnimateOnTitleContextChanges;
    _Bool _hidden;
    UIViewController *_keyViewController;
}

+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyle:(long long)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;
+ (struct CGRect)_frameForStyle:(long long)arg1 orientation:(long long)arg2 inWindowOfSize:(struct CGSize)arg3;
+ (void)_newAppContextCreated:(id)arg1;
+ (unsigned long long)globalContextLayoutBehavior;
+ (void)setGlobalContextLayoutBehavior:(unsigned long long)arg1;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak UIViewController *keyViewController; // @synthesize keyViewController=_keyViewController;
@property(nonatomic) _Bool shouldAnimateOnTitleContextChanges; // @synthesize shouldAnimateOnTitleContextChanges=_shouldAnimateOnTitleContextChanges;
- (void).cxx_destruct;
- (_Bool)mayAnimateTitleChangesForStatusBarAppContext:(id)arg1;
- (_Bool)titlePressedForStatusBarAppContext:(id)arg1;
- (_Bool)navPressedForStatusBarAppContext:(id)arg1;
- (void)titleTruncationAnimationDidCompleteForAppContextView:(id)arg1 durationOfFade:(double)arg2;
- (void)titleTruncationAnimationWillBeginForAppContextView:(id)arg1 durationOfFade:(double)arg2;
- (void)releaseDisableTitleTruncationTimerAssertion;
- (void)takeDisableTitleTruncationTimerAssertion;
- (void)releaseDisableAppContextAnimationsAssertion;
- (void)takeDisableAppContextAnimationsAssertion;
- (void)releaseGlobalContextViewAssertion:(id)arg1;
- (id)takeGlobalContextAssertionAnimated:(_Bool)arg1 duration:(double)arg2;
- (id)takeGlobalContextAssertionAnimated:(_Bool)arg1;
- (id)takeGlobalContextAssertion;
- (void)releaseAppContextViewAssertion:(id)arg1;
- (id)takeAppContextAssertionAnimated:(_Bool)arg1 duration:(double)arg2;
- (id)takeAppContextAssertionAnimated:(_Bool)arg1;
- (id)takeAppContextAssertion;
- (void)_handleResignKeyWindow:(id)arg1;
- (void)_handleBecomeKeyWindow:(id)arg1;
- (id)currentApplicationContextDelegate;
- (void)setApplicationContextDelegate:(id)arg1;
- (id)currentApplicationContextDataSource;
- (void)setApplicationContextDataSource:(id)arg1 animated:(_Bool)arg2;
- (void)updateApplicationContextAnimated:(_Bool)arg1;
- (void)_updateShouldRasterize;
- (void)_evaluateServerRegistration;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (void)forceUpdateDoubleHeightStatus;
- (_Bool)isDoubleHeight;
- (_Bool)_isTransparent;
- (_Bool)isTranslucent;
- (double)_standardHeight;
- (long long)currentStyle;
- (double)currentHeight;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (double)heightForOrientation:(long long)arg1;
- (void)_setOverrideHeight:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStyleDelegate:(id)arg1;
- (id)globalContextProperties;
- (_Bool)isTimeHidden;
- (void)setTimeHidden:(_Bool)arg1 duration:(double)arg2 animation:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setTimeHidden:(_Bool)arg1 animation:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setTimeHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)areIndicatorsHidden;
- (void)setIndicatorsHidden:(_Bool)arg1 duration:(double)arg2 animation:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setIndicatorsHidden:(_Bool)arg1 animation:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIndicatorsHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isHidden;
- (void)requestStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2;
- (id)keyViewController:(_Bool)arg1;
- (void)setKeyViewController:(id)arg1 animated:(_Bool)arg2;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)_createSubviewsIfNeeded;
- (_Bool)isAppContextTitleTruncationAnimationRunning;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIStatusBarWindow *statusBarWindow;
@property(readonly) Class superclass;

@end

