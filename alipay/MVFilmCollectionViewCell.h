//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, MVPosterImageView, UIView;

@interface MVFilmCollectionViewCell : UICollectionViewCell
{
    UIView *maskView;
    CAShapeLayer *borderLayer;
    MVPosterImageView *_posterImageView;
    double _maskOpacity;
    double _borderOpacity;
}

@property(nonatomic) double borderOpacity; // @synthesize borderOpacity=_borderOpacity;
@property(nonatomic) double maskOpacity; // @synthesize maskOpacity=_maskOpacity;
@property(retain, nonatomic) MVPosterImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

