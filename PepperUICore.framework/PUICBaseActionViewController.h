//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UIScrollView, UIView;

@interface PUICBaseActionViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIScrollView *_scrollView;
    UIView *_sourceView;
    UIView *_blurredView;
    UIView *_curtainView;
}

@property(retain, nonatomic) UIView *curtainView; // @synthesize curtainView=_curtainView;
@property(retain, nonatomic) UIView *blurredView; // @synthesize blurredView=_blurredView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)blurDidGenerate;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_hideParent;
- (void)setupDidDisappear;
- (void)setupWillDisappear;
- (void)setupDidAppear;
- (void)setupWillAppear;
- (void)_generateBlur;
- (void)_swipeBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (struct CGRect)_defaultInitialViewFrame;
- (void)_setSourceView:(id)arg1;
- (void)dealloc;
- (id)initWithSourceView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

