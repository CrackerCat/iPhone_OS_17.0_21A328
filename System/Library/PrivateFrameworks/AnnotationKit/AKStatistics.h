//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSString;

@interface AKStatistics : NSObject
{
    NSString *_documentType;	// 8 = 0x8
    NSString *_clientPrefix;	// 16 = 0x10
    NSCountedSet *_annotationsCounts;	// 24 = 0x18
}

+ (id)nameForAnnotation:(id)arg1;	// IMP=0x00600000000bea59
+ (id)nameForClassName:(id)arg1;	// IMP=0x00600000000be9e4
- (void).cxx_destruct;	// IMP=0x00000000000bebc7
@property(retain, nonatomic) NSCountedSet *annotationsCounts; // @synthesize annotationsCounts=_annotationsCounts;
@property(retain, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property(retain, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
- (void)logDocumentSaved;	// IMP=0x00000000000be7a2
- (void)logShapeDetectionHUDPickedShape:(id)arg1;	// IMP=0x00000000000be6ca
- (void)logShapeDetectionHUDShown;	// IMP=0x00000000000be63f
- (void)_logCoreAnalyticsAnnotationCreateActionForAnnotationType:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000be433
- (void)_logCoreAnalyticsHUDPickActionForAnnotationType:(id)arg1;	// IMP=0x00000000000be26f
- (void)_logCoreAnalyticsAction:(id)arg1;	// IMP=0x00000000000be0c5
- (void)logInkAnnotationStrokeAdded:(id)arg1;	// IMP=0x00000000000bdfc9
- (void)logAnnotationAdded:(id)arg1;	// IMP=0x00000000000bde66
- (void)resetLogging;	// IMP=0x00000000000bde13

@end
