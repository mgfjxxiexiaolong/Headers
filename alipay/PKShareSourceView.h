//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UILabel;

@interface PKShareSourceView : UIImageView
{
    UIImageView *_sourceIcon;
    UILabel *_sourceLabel;
    NSString *_sourceIconUrl;
    NSString *_sourceName;
}

+ (struct CGSize)sizeWithTranslationInfoData:(id)arg1;
+ (struct CGSize)sizeWithData:(id)arg1;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *sourceIconUrl; // @synthesize sourceIconUrl=_sourceIconUrl;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UIImageView *sourceIcon; // @synthesize sourceIcon=_sourceIcon;
- (void).cxx_destruct;
- (void)bindTranslationDataWith:(id)arg1;
- (void)bindDataWith:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)BGImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

