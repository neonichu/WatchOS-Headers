//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "SPInterfaceItem.h"

@class NSBundle, NSDictionary, NSString;

@interface SPInterfaceLabel : UILabel <SPInterfaceItem>
{
    _Bool _isStaticNotificationAlertItem;
    NSDictionary *_itemDescriptionForIB;
    long long _glanceLabelSize;
    NSBundle *_bundle;
    NSString *_stringsFileName;
    NSDictionary *_companionProperty;
    long long _interfaceAlignment;
    long long _verticalInterfaceAlignment;
    double _lineHeight;
    id _fontSizeValue;
    double _width;
    double _widthAdjustment;
    double _height;
    double _heightAdjustment;
    struct CGSize _fixedSize;
    struct CGSize _cachedContainerSize;
    struct CGSize _cachedSize;
}

@property(nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
@property(nonatomic) struct CGSize cachedContainerSize; // @synthesize cachedContainerSize=_cachedContainerSize;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(nonatomic) double heightAdjustment; // @synthesize heightAdjustment=_heightAdjustment;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double widthAdjustment; // @synthesize widthAdjustment=_widthAdjustment;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) id fontSizeValue; // @synthesize fontSizeValue=_fontSizeValue;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) long long verticalInterfaceAlignment; // @synthesize verticalInterfaceAlignment=_verticalInterfaceAlignment;
@property(nonatomic) long long interfaceAlignment; // @synthesize interfaceAlignment=_interfaceAlignment;
@property(copy, nonatomic) NSDictionary *companionProperty; // @synthesize companionProperty=_companionProperty;
@property(copy, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(nonatomic) long long glanceLabelSize; // @synthesize glanceLabelSize=_glanceLabelSize;
@property(nonatomic) _Bool isStaticNotificationAlertItem; // @synthesize isStaticNotificationAlertItem=_isStaticNotificationAlertItem;
@property(retain, nonatomic) NSDictionary *itemDescriptionForIB; // @synthesize itemDescriptionForIB=_itemDescriptionForIB;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;
- (id)defaultGlanceTextAttributes;
- (id)filteredAttributedTextForGlance;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (_Bool)hasIntrinsicHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

