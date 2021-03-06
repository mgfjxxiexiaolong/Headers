//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GTLRObject.h"

@class GMSx_GTLRPlaces_FeatureId, GMSx_GTLRPlaces_PlacePopularity, NSArray, NSNumber, NSString;

@interface GMSx_GTLRPlaces_PlaceInfoMobile : GMSx_GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain) NSNumber *areaKm2; // @dynamic areaKm2;
@property(retain) NSNumber *centroidLatE7; // @dynamic centroidLatE7;
@property(retain) NSNumber *centroidLngE7; // @dynamic centroidLngE7;
@property(retain) NSArray *encodedS2Covering; // @dynamic encodedS2Covering;
@property(retain) GMSx_GTLRPlaces_FeatureId *featureId; // @dynamic featureId;
@property(retain) NSNumber *hasOccupiedRelationCategory; // @dynamic hasOccupiedRelationCategory;
@property(copy) NSString *highLevelGcid; // @dynamic highLevelGcid;
@property(retain) NSNumber *isSensitivePlace; // @dynamic isSensitivePlace;
@property(retain) NSArray *matchedMac; // @dynamic matchedMac;
@property(retain) NSNumber *numCheckins; // @dynamic numCheckins;
@property(retain) NSArray *placeLocationsClouds; // @dynamic placeLocationsClouds;
@property(retain) NSNumber *placeRankScore; // @dynamic placeRankScore;
@property(retain) GMSx_GTLRPlaces_PlacePopularity *popularity; // @dynamic popularity;
@property(copy) NSString *prominentCategory; // @dynamic prominentCategory;
@property(retain) NSArray *registeredBeacon; // @dynamic registeredBeacon;
@property(copy) NSString *vertical; // @dynamic vertical;
@property(retain) NSArray *weeklyBusinessHours; // @dynamic weeklyBusinessHours;
@property(retain) NSArray *wifiPlaceModel; // @dynamic wifiPlaceModel;

@end

