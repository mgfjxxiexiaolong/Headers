//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, QQBasePhoto, QQImageView, UIButton;

@protocol PhotoBrowserViewDelegate <NSObject>
- (void)didRotatePhoto:(QQBasePhoto *)arg1 toNewOrientation:(long long)arg2;
- (_Bool)canDownloadThisPhoto:(int)arg1 currentPage:(int)arg2;
- (void)setToolbarViewShow;
- (_Bool)isToolbarViewShow;
- (void)setToolbarViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPageControlHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePageControl;
- (void)didScrollToPage:(int)arg1;
- (void)longPressEndDetected;
- (void)longPressDetected;
- (void)singleTapDetected;
- (void)singleTapBeginCanceled;
- (void)singleTapBeginDetected;
- (QQBasePhoto *)imageAtIndex:(int)arg1;
- (int)numberOfPages;

@optional
- (void)QZResetCurrentProjection;
- (void)QZProjectCurrentUrl:(QQBasePhoto *)arg1;
- (_Bool)shouldPlayCurrentVideo;
- (void)changePhotoPageFrom:(int)arg1 to:(int)arg2;
- (_Bool)isHaveRecommandPage;
- (void)onClickAtlasCommentImage:(unsigned long long)arg1;
- (NSArray *)getCommentUrls;
- (void)onScrollToPreviousPage;
- (void)scrollViewWillBeginDragging;
- (_Bool)showPanoramaPhoto:(QQBasePhoto *)arg1;
- (void)notifyPhotoDownloadSuccess:(QQBasePhoto *)arg1;
- (void)qzAlbumLastPhotoScroll;
- (void)stopPhotoTagViewFlash;
- (void)updatePhotoTagView;
- (void)imageView:(QQImageView *)arg1 photoPlayButtonPressed:(UIButton *)arg2 photo:(QQBasePhoto *)arg3;
- (_Bool)photoBrowserDownloadFail;
- (void)downloadAndAnimateFinished;
@end

