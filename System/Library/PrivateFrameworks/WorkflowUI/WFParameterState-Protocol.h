//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSCopying-Protocol.h>
#import <WorkflowUI/WFVariableSerialization-Protocol.h>

@class NSArray, WFParameterStateProcessingContext;
@protocol WFPropertyListObject;

@protocol WFParameterState <NSCopying, WFVariableSerialization>
- (void)processWithContext:(WFParameterStateProcessingContext *)arg1 userInputRequiredHandler:(void (^)(NSString *, id <WFParameterState>))arg2 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg3;
- (NSArray *)containedVariables;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@optional
+ (NSArray *)processingValueClasses;
+ (Class)processingValueClass;
- (id <WFPropertyListObject>)legacySerializedRepresentation;
@end
