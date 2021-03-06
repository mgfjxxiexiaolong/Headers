//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QQImageViewDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, UIImage, UIScrollView;
@protocol PhotoBrowserViewDelegate;

@interface PhotoBrowserView : UIView <UIScrollViewDelegate, QQImageViewDelegate>
{
    UIScrollView *_scrollView;
    id <PhotoBrowserViewDelegate> _dataSource;
    NSMutableDictionary *_imageViews;
    NSMutableSet *_tinyVideoImageViews;
    int _oldPage;
    int _currentPage;
    _Bool _isLayout;
    _Bool _isScroll;
    NSMutableDictionary *_photo_first_visit_status;
    NSMutableDictionary *_photo_first_visit_downloading_time;
    NSMutableDictionary *_photo_first_visit_imageType;
    int _accType;
    _Bool _enableCorrectThumbnailRect;
    int _xo;
    double _beginDragingTime;
    _Bool _ignoreMakeRedEnv;
    UIImage *_firstImageViewThumbImage;
}

@property(nonatomic) _Bool ignoreMakeRedEnv; // @synthesize ignoreMakeRedEnv=_ignoreMakeRedEnv;
@property(retain, nonatomic) UIImage *firstImageViewThumbImage; // @synthesize firstImageViewThumbImage=_firstImageViewThumbImage;
@property(nonatomic, setter=setCurrentPage:) int currentPage; // @synthesize currentPage=_currentPage;
- (void)autoPlayNext;
- (void)hideCurrentPageProgressView;
- (void)handleDidReceiveMemoryWarningNotification:(id)arg1;
- (int)getCurrentImageViewImageState;
- (struct CGPoint)getCurrentImageViewPosition;
- (id)currentFaceDetectorCoverView;
- (id)currentQQImageView;
- (id)currentImageView;
- (id)getCurrentImageView;
- (id)getCurrentImagePath;
- (id)getCurrentThumbImage;
- (id)getCurrentImage;
- (_Bool)shouldPlayCurrentVideo:(id)arg1;
- (_Bool)downloadFail;
- (void)statFirstVisitPhotoDownloadTime;
- (void)statFirstVisitPhotoState;
- (_Bool)showPanoramaPhoto:(id)arg1;
- (void)notifyPhotoDownloadSuccess:(id)arg1;
- (void)calcDownloadTime:(id)arg1;
- (void)ChechIsDownloading:(id)arg1;
- (void)showProgressInQQImageView:(id)arg1;
- (void)QQImageView:(id)arg1 didRotateToNewOrientation:(long long)arg2;
- (void)QQImageViewDownloadAndAnimateFinished:(id)arg1;
- (void)QQImageViewLongPressEndDetected:(id)arg1;
- (void)QQImageViewLongPressDetected:(id)arg1;
- (void)QQImageViewSingleTapDetected:(id)arg1;
- (void)QQImageViewSingleTapCancelDetected:(id)arg1;
- (void)QQImageViewSingleTapBeginDetected:(id)arg1;
- (void)QQImageView:(id)arg1 photoPlayButton:(id)arg2 photo:(id)arg3;
- (void)QZResetProjectProgress;
- (struct CGPoint)contentOffsetForPage:(long long)arg1;
- (struct CGRect)frameForPage:(int)arg1;
- (struct CGSize)contentSizeForScrollView;
- (struct CGRect)frameForScrollView;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewAddSubView:(id)arg1;
- (void)setupCurrentQzonePhotoPlayButton;
- (void)reloadCurrentPhoto;
- (void)flashPageControl;
- (void)deletePhotos:(long long)arg1 atIndex:(long long)arg2;
- (void)insertPhotos:(int)arg1 atIndex:(int)arg2;
- (void)updateContents;
- (void)reset;
- (void)hidePageControllerAfterDelay;
- (void)setCurrentPage:(long long)arg1 withPageControlShow:(_Bool)arg2;
- (void)parpareCurrentPageImageViews:(int)arg1 isSetCurrentPage:(_Bool)arg2;
- (void)prepareSourceLabelForImageView:(id)arg1;
- (void)removeAllImageViewsExceptIndexSet:(id)arg1;
- (void)releaseScrollViewWithPage:(int)arg1;
- (id)loadScrollViewWithPage:(int)arg1;
- (id)reuseTinyVideoImageWithPage:(int)arg1;
- (id)allocAndInitImageView:(int)arg1;
- (id)getImageViewAtPage:(int)arg1;
- (void)setCurrentPageCanDownload;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withDataSource:(id)arg2;

// Remaining properties
@property(nonatomic) id <PhotoBrowserViewDelegate> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableCorrectThumbnailRect; // @dynamic enableCorrectThumbnailRect;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *imageViews; // @dynamic imageViews;
@property(readonly) Class superclass;

@end

