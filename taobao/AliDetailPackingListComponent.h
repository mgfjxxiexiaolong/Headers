//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

@class AliDetailProductInfoComponentModel, NSArray;

@interface AliDetailPackingListComponent : AliProductDetailComponent
{
    NSArray *items;
    AliDetailProductInfoComponentModel *_infoModel;
}

+ (void)setComponentIsOpen:(_Bool)arg1 Object:(id)arg2;
+ (_Bool)getComponentIsOpenInObject:(id)arg1;
+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) AliDetailProductInfoComponentModel *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (void)rowClicked;
- (id)buttonForRow;
- (id)viewForRow:(id)arg1 Dash:(_Bool)arg2;
- (double)buildNormalRowsHeight:(double)arg1 Count:(long long)arg2 HasDashLine:(_Bool)arg3;
- (void)reloadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setObject:(id)arg1;
- (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;

@end

