/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVPointOnRoad : PBCodable <NSCopying> {
    int  _featureIndex;
    struct { 
        unsigned int vertexIndex : 1; 
    }  _has;
    int  _vertexIndex;
}

@property (nonatomic) int featureIndex;
@property (nonatomic) BOOL hasVertexIndex;
@property (nonatomic) int vertexIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureIndex;
- (BOOL)hasVertexIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureIndex:(int)arg1;
- (void)setHasVertexIndex:(BOOL)arg1;
- (void)setVertexIndex:(int)arg1;
- (int)vertexIndex;
- (void)writeTo:(id)arg1;

@end
