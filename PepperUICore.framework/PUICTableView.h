//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "PUICCrownInputSequencerDataSource.h"
#import "PUICCrownInputSequencerDelegate.h"
#import "PUICTableViewCellActionBarDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSString, NSTimer, PUICSectionIndexOverlayView, PUICTableViewCellActionBar, UIPanGestureRecognizer, UIView;

@interface PUICTableView : UITableView <PUICCrownInputSequencerDelegate, PUICCrownInputSequencerDataSource, UIGestureRecognizerDelegate, PUICTableViewCellActionBarDelegate>
{
    _Bool _sectionIndexOverlayHidden;
    PUICSectionIndexOverlayView *_sectionIndexOverlayView;
    UIView *_sectionIndexOverlayDimmingView;
    NSString *_sectionIndexOverlayTitle;
    NSTimer *_delayedSectionIndexOverlayHidingTimer;
    UIPanGestureRecognizer *_swipeActionPanRecognizer;
    double _initialTranslation;
    PUICTableViewCellActionBar *_actionBar;
    _Bool _swipingLeft;
    struct {
        unsigned int dataSourceSectionForSectionIndexTitle:1;
        unsigned int dataSourceSectionIndexTitlesForTableView:1;
        unsigned int dataSourceCanEditRow:1;
        unsigned int delegateDeleteConfirmationButton:1;
        unsigned int delegateSwipeAccessoryButton:1;
        unsigned int delegateSwipeControlMask:1;
        unsigned int delegateTitleForDeleteButton:1;
        unsigned int delegateTitleForAccessoryButton:1;
        unsigned int dataSourceProvidesTitlesForSectionIndexOverlay:1;
        unsigned int delegateWillPerformAction:1;
        unsigned int delegateDidPerformAction:1;
        unsigned int delegateEditActionsForRow:1;
        unsigned int madeSwipedCellViewsTransparent:1;
    } _puicFlags;
    _Bool _showsSectionIndexOverlayOnCrownScroll;
    NSIndexPath *_swipedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *swipedIndexPath; // @synthesize swipedIndexPath=_swipedIndexPath;
@property(nonatomic) _Bool showsSectionIndexOverlayOnCrownScroll; // @synthesize showsSectionIndexOverlayOnCrownScroll=_showsSectionIndexOverlayOnCrownScroll;
- (void).cxx_destruct;
- (void)_disableDefaultUITableViewIndexBar;
- (id)_swipeAccessoryButtonForRowAtIndexPath:(id)arg1;
- (id)_titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg1;
- (id)_deleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (long long)_numberOfRows;
- (void)_delayedSectionIndexOverlayHidingTimerFired:(id)arg1;
- (void)_cleanupDelayedSectionIndexOverlayHidingTimer;
- (void)_cancelDelayedSectionIndexOverlayHiding;
- (void)_scheduleDelayedSectionIndexOverlayHiding;
- (void)_updateSectionIndexOverlayViewText;
- (void)_crownInputSequencerIdleDidChangeNotification:(id)arg1;
- (void)_crownInputSequencerOffsetDidChangeNotification:(id)arg1;
- (void)_puic_configureCrownInputSequencer;
- (double)openThresholdForActionBar:(id)arg1;
- (unsigned long long)nextStateForActionBar:(id)arg1;
- (void)actionBar:(id)arg1 tappedButtonForAction:(id)arg2;
- (id)actionsForActionBar:(id)arg1;
- (void)resetSwipedRowAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSwipedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_performDestructiveAction:(id)arg1 atIndexPath:(id)arg2;
- (void)_resetSwipeViewPositionImmediately;
- (void)_performNonDestructiveAction:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)_swipedCell;
- (void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (double)_rubberBandOffsetForOffset:(double)arg1 usingActionBar:(id)arg2;
- (void)_swipeRecognizerChanged:(id)arg1;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)swipeRecognizerDidRecognize:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_canSwipeToEditRowAtIndexPath:(id)arg1;
- (void)setCellSwipeEnabled:(_Bool)arg1;
- (_Bool)cellSwipeEnabled;
- (void)_setSectionIndexOverlayHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setSectionIndexOverlayTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)deleteConfirmationIndexPath;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldDisplayExtraSeparatorsAtOffset:(double *)arg1;
@property(nonatomic) id <PUICTableViewDelegate> delegate;
@property(nonatomic) id <PUICTableViewDataSource> dataSource;
- (void)setSectionIndexMinimumDisplayRowCount:(long long)arg1;
- (void)_layoutSectionIndexOverlayView;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

