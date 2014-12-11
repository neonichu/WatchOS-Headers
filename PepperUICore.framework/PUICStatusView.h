//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface PUICStatusView : UIView
{
    id <PUICStatusViewState> _currentVisibleState;
    _Bool _inTransition;
    CDUnknownBlockType _showIndex;
    CDUnknownBlockType _postTransitionAction;
    CDUnknownBlockType _postTransitionCompletion;
    id <PUICStatusViewDataSource> _dataSource;
    NSMutableArray *_states;
}

+ (double)defaultStateTransitionOutDuration;
+ (double)defaultStateTransitionInDuration;
@property(retain, nonatomic) NSMutableArray *states; // @synthesize states=_states;
@property(nonatomic) __weak id <PUICStatusViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_transitionInToState:(id)arg1 oldState:(id)arg2 nextState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionOutFromState:(id)arg1 newState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_transitionFromState:(id)arg1 toState:(id)arg2 nextState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_viewForStatusViewState:(id)arg1;
- (void)_setVisibleStatusViewState:(id)arg1 animated:(_Bool)arg2 nextState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_showFinalStateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showStateNamed:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showFinalStateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showStateNamed:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handlePostTransitionAction;
- (void)_addPostTransitionAction:(CDUnknownBlockType)arg1 withActionCompletion:(CDUnknownBlockType)arg2;
- (id)visibleState;
- (_Bool)isStateActiveByIndex:(unsigned long long)arg1;
- (_Bool)isStateActive:(id)arg1;
- (id)stateByIndex:(unsigned long long)arg1;
- (id)stateForName:(id)arg1;
- (unsigned long long)numberOfStates;
- (void)reloadData;

@end

