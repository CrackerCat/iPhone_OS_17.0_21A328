//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class ACAccount, AMSProcessInfo, NSDate, NSDictionary, NSSet, NSString;
@protocol NSObject;

@protocol AMSBagDataSourceProtocol <NSObject>
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) NSDate *expirationDate;
- (void)valueForURLVariable:(NSString *)arg1 account:(ACAccount *)arg2 completion:(void (^)(NSString *))arg3;
- (NSString *)valueForURLVariable:(NSString *)arg1 account:(ACAccount *)arg2;
- (void)setDefaultValue:(id <NSObject>)arg1 forKey:(NSString *)arg2;
- (void)loadWithCompletion:(void (^)(AMSBagDataSourceLoadResult *, NSError *))arg1;
- (id <NSObject>)defaultValueForKey:(NSString *)arg1;

@optional
@property(copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;
@property(copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@property(retain, nonatomic) NSString *descriptionExtended;
- (NSDictionary *)loadedValuesForKeys:(NSSet *)arg1;
@end
