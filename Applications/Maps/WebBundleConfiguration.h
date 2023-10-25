//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WebBundleConfiguration : NSObject
{
    _Bool _temporarilyUseOnDeviceDirectory;	// 8 = 0x8
    NSString *_onDeviceDirectory;	// 16 = 0x10
    NSString *_onDeviceDirectoryWritable;	// 24 = 0x18
    NSURL *_webBundleDirectory;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000630378
- (void).cxx_destruct;	// IMP=0x0020000000630a24
@property(nonatomic) _Bool temporarilyUseOnDeviceDirectory; // @synthesize temporarilyUseOnDeviceDirectory=_temporarilyUseOnDeviceDirectory;
@property(retain, nonatomic) NSURL *webBundleDirectory; // @synthesize webBundleDirectory=_webBundleDirectory;
@property(readonly, nonatomic) NSString *onDeviceDirectoryWritable; // @synthesize onDeviceDirectoryWritable=_onDeviceDirectoryWritable;
@property(readonly, nonatomic) NSString *onDeviceDirectory; // @synthesize onDeviceDirectory=_onDeviceDirectory;
- (void)_moveOnDeviceFilesToWritableDirectory;	// IMP=0x0010000000630942
- (id)directoryForNewWebBundleName:(id)arg1;	// IMP=0x00100000006307ad
- (id)_webBundleConfigurationStorageDirectory;	// IMP=0x0010000000630727
- (id)_onDeviceDirectory;	// IMP=0x001000000063066c
@property(readonly, nonatomic) NSURL *absoluteOnDeviceDirectoryWritable;
@property(readonly, nonatomic) NSString *manifestKey;
@property(readonly, nonatomic) NSString *manifestSignedResourceName;
@property(readonly, nonatomic) NSURL *debugOverrideServerURL;
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic) NSURL *entryPointUrlBase;
@property(readonly, nonatomic) NSURL *entryPointUrl;
@property(readonly, nonatomic) NSString *urlScheme;
@property(readonly, nonatomic) NSString *messageHandlerName;
@property(readonly, nonatomic) NSString *rootDirectory;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006303c4
- (unsigned long long)hash;	// IMP=0x0010000000630380
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000630308
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000063025d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006301e2
- (id)initAndMoveNewConfiguration;	// IMP=0x0010000000630196

@end
