//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICBaseActionViewController.h>

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, PUICActionCancelGestureRecognizer, PUICActionGroup, PUICActionItem, PUICApplicationStatusBarItem, PUICHyphenatedLabel, UIView, UIViewController;

@interface PUICActionViewController : PUICBaseActionViewController <UIGestureRecognizerDelegate>
{
    _Bool _actionGroupDirty;
    _Bool _appearing;
    _Bool _visible;
    PUICActionGroup *_actionGroup;
    UIViewController *_viewControllerForStatusBarForwarding;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _selectHandler;
    NSArray *_actionItems;
    NSMapTable *_buttonByActionItem;
    NSMutableArray *_dirtyActionItems;
    long long _effectiveActionStyle;
    PUICActionItem *_selectedActionItem;
    UIView *_headerView;
    PUICHyphenatedLabel *_messageLabel;
    PUICApplicationStatusBarItem *_statusBarItem;
    NSMutableArray *_actionButtonCache;
    PUICActionCancelGestureRecognizer *_cancelGestureRecognizer;
}

@property(retain, nonatomic) PUICActionCancelGestureRecognizer *cancelGestureRecognizer; // @synthesize cancelGestureRecognizer=_cancelGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *actionButtonCache; // @synthesize actionButtonCache=_actionButtonCache;
@property(nonatomic) __weak PUICApplicationStatusBarItem *statusBarItem; // @synthesize statusBarItem=_statusBarItem;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool appearing; // @synthesize appearing=_appearing;
@property(retain, nonatomic) PUICHyphenatedLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PUICActionItem *selectedActionItem; // @synthesize selectedActionItem=_selectedActionItem;
@property(nonatomic) long long effectiveActionStyle; // @synthesize effectiveActionStyle=_effectiveActionStyle;
@property(retain, nonatomic) NSMutableArray *dirtyActionItems; // @synthesize dirtyActionItems=_dirtyActionItems;
@property(retain, nonatomic) NSMapTable *buttonByActionItem; // @synthesize buttonByActionItem=_buttonByActionItem;
@property(copy, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(nonatomic, getter=isActionGroupDirty) _Bool actionGroupDirty; // @synthesize actionGroupDirty=_actionGroupDirty;
@property(copy, nonatomic) CDUnknownBlockType selectHandler; // @synthesize selectHandler=_selectHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak UIViewController *viewControllerForStatusBarForwarding; // @synthesize viewControllerForStatusBarForwarding=_viewControllerForStatusBarForwarding;
@property(retain, nonatomic) PUICActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
- (void).cxx_destruct;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateForChangedActionGroupAnimated:(_Bool)arg1;
- (void)_unregisterForNotificationsForActionGroup:(id)arg1;
- (void)_registerForNotificationsForActionGroup:(id)arg1;
- (id)_createButtonForActionItem:(id)arg1 withActionStyle:(long long)arg2;
- (void)_cleanUpActionButton:(id)arg1;
- (void)_applyActionItem:(id)arg1 toButton:(id)arg2 withActionStyle:(long long)arg3;
- (_Bool)canBecomeFirstResponder;
- (void)_actionItemDidUpdateNotification:(id)arg1;
- (void)_actionGroupDidUpdateNotification:(id)arg1;
- (void)blurDidGenerate;
- (void)setupDidDisappear;
- (void)setupWillDisappear;
- (void)setupDidAppear;
- (void)setupWillAppear;
- (void)_setScale:(float)arg1 animated:(_Bool)arg2;
- (id)_visibleViews;
- (struct CGPoint)_initialOffsetForView:(id)arg1;
- (_Bool)_needsLongTitleLayoutForButtons:(id)arg1 withNumberOfRows:(long long)arg2;
- (void)_layout;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)puic_applicationStatusBarItem;
- (_Bool)prefersStatusBarHidden;
- (id)initWithActionGroup:(id)arg1 sourceView:(id)arg2 selectHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_invokeCompletionHandler;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_cancelGesture:(id)arg1;
- (void)_actionButtonClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

