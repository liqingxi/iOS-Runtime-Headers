/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int searchResponseRelativeTimestamp : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int resultIndex : 1; 
        unsigned int sequenceNumber : 1; 
    unsigned long long _businessID;
    } _has;
    int _localSearchProviderID;
    long long _placeID;
    int _resultIndex;
    double _searchResponseRelativeTimestamp;
    int _sequenceNumber;
}

@property unsigned long long businessID;
@property BOOL hasBusinessID;
@property BOOL hasLocalSearchProviderID;
@property BOOL hasPlaceID;
@property BOOL hasResultIndex;
@property BOOL hasSearchResponseRelativeTimestamp;
@property BOOL hasSequenceNumber;
@property int localSearchProviderID;
@property long long placeID;
@property int resultIndex;
@property double searchResponseRelativeTimestamp;
@property int sequenceNumber;

- (unsigned long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBusinessID;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasPlaceID;
- (BOOL)hasResultIndex;
- (BOOL)hasSearchResponseRelativeTimestamp;
- (BOOL)hasSequenceNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (long long)placeID;
- (BOOL)readFrom:(id)arg1;
- (int)resultIndex;
- (double)searchResponseRelativeTimestamp;
- (int)sequenceNumber;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasPlaceID:(BOOL)arg1;
- (void)setHasResultIndex:(BOOL)arg1;
- (void)setHasSearchResponseRelativeTimestamp:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setSearchResponseRelativeTimestamp:(double)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)writeTo:(id)arg1;

@end
