//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class FAPrinter, FAPrinterPickerViewController;

@protocol FAPrinterPickerViewControllerDelegate <NSObject>

@optional
- (void)printerPicker:(FAPrinterPickerViewController *)arg1 didSelectPrinter:(FAPrinter *)arg2;
@end

