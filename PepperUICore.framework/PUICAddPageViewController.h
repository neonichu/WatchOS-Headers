//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, PUICPageScrollViewController, _PUICAddPageActivationButton;

@interface PUICAddPageViewController : UIViewController
{
    _PUICAddPageActivationButton *_activationButton;
    _Bool _active;
    PUICPageScrollViewController *_pageScrollViewController;
    id <PUICAddPageViewControllerDelegate> _delegate;
    NSString *_activationButtonTitle;
}

@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *activationButtonTitle; // @synthesize activationButtonTitle=_activationButtonTitle;
@property(nonatomic) __weak id <PUICAddPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUICPageScrollViewController *pageScrollViewController; // @synthesize pageScrollViewController=_pageScrollViewController;
- (void).cxx_destruct;
- (void)_stopOnPageBoundary;
- (void)idleDidChange:(id)arg1;
- (void)_activationButtonPress;
- (void)deactivateWithAdditionalAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateWithAdditionalAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIViewController *currentPageViewController;
@property(readonly, nonatomic) unsigned long long currentPageIndex;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

