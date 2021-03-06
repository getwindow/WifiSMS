/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OADLineEnd : OADProperties <NSCopying>
{
    NSInteger mType;
    BOOL mIsTypeOverridden;
    NSInteger mWidth;
    BOOL mIsWidthOverridden;
    NSInteger mLength;
    BOOL mIsLengthOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDefaults;
- (id)initWithType:(NSInteger)arg1 width:(NSInteger)arg2 length:(NSInteger)arg3;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (BOOL)isTypeOverridden;
- (NSInteger)width;
- (void)setWidth:(NSInteger)arg1;
- (BOOL)isWidthOverridden;
- (NSInteger)length;
- (void)setLength:(NSInteger)arg1;
- (BOOL)isLengthOverridden;

@end
