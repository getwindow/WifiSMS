/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTComputedFormatSpec;



@interface GQDTDateCell : GQDTCell 
{
    struct __CFDate { } *mDate;
    GQDTComputedFormatSpec *mComputedFormat;
}


- (void)dealloc;
- (struct __CFDate { }*)date;
- (struct __CFString { }*)getDateFormat;
- (struct __CFString { }*)createStringValue;
- (NSInteger)readAttributesForDateCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end
