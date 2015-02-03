//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUICCrownIndicatorWindow, PUICCrownView;

@interface _PUICCrownIndicator : NSObject
{
    id displayer;
    PUICCrownIndicatorWindow *_crownWindow;
    PUICCrownView *_crownView;
}

+ (double)trackMinY;
+ (double)trackMinX;
+ (double)trackCornerRadius;
+ (double)trackHeight;
+ (id)trackBackgroundColor;
+ (double)hideAnimationDuration;
+ (id)_sharedIndicator;
+ (id)acquireCrownIndicatorFor:(id)arg1;
+ (id)sharedIndicatorForDisplayer:(id)arg1;
+ (struct CGRect)windowFrame;
@property(retain, nonatomic) PUICCrownView *crownView; // @synthesize crownView=_crownView;
@property(retain, nonatomic) PUICCrownIndicatorWindow *crownWindow; // @synthesize crownWindow=_crownWindow;
@property(nonatomic) __weak id displayer; // @synthesize displayer;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isVisible) _Bool visible;
- (void)_resetWindowLevel;
@property(nonatomic) _Bool usingCrown;
@property(nonatomic) double visibleLength;
@property(nonatomic) double offset;
@property(nonatomic) double length;
- (id)init;

@end

