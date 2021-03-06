/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSData, NSDate, NSOrderedSet, NSString, PLRevGeoCompoundNameInfo;

@interface PLMomentList : PLManagedObject <PLAssetContainerList> {
    PLRevGeoCompoundNameInfo *_cachedPrimaryNameInfo;
    PLRevGeoCompoundNameInfo *_cachedSecondaryNameInfo;
    BOOL _loadedNameInfo;
}

@property(readonly) unsigned int containersCount;
@property(retain) NSDate * endDate;
@property short generationType;
@property short granularityLevel;
@property(readonly) NSArray * localizedLocationNames;
@property(readonly) NSString * localizedTitle;
@property(retain) NSOrderedSet * moments;
@property(retain) NSOrderedSet * momentsForMegaMoment;
@property(retain) NSOrderedSet * momentsForYear;
@property(retain) NSDate * representativeDate;
@property(retain) NSData * reverseLocationData;
@property BOOL reverseLocationDataIsValid;
@property int sortIndex;
@property(retain) NSDate * startDate;
@property(retain) NSString * title;

+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 returnsObjectsAsFaults:(BOOL)arg4;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(int)arg1 inYear:(int)arg2 withDay:(int)arg3 inManagedObjectContext:(id)arg4;
+ (id)findOrCreateYearMomentListForYear:(int)arg1 inManagedObjectContext:(id)arg2;

- (id)_typeDescription;
- (void)_updateCachedNameInfoIfNeeded;
- (BOOL)_validateForInsertOrUpdate:(id*)arg1;
- (void)addMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForMegaMomentObject:(id)arg1;
- (void)addMomentsForYear:(id)arg1;
- (void)addMomentsForYearObject:(id)arg1;
- (void)awakeFromInsert;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (void)dealloc;
- (void)delete;
- (id)diagnosticInformation;
- (void)didTurnIntoFault;
- (void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2;
- (void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned int)arg2;
- (void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned int)arg2;
- (BOOL)isEmpty;
- (BOOL)isMeaningful;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)moments;
- (id)pl_debugDescription;
- (void)removeMomentsForMegaMoment:(id)arg1;
- (void)removeMomentsForMegaMomentAtIndexes:(id)arg1;
- (void)removeMomentsForMegaMomentObject:(id)arg1;
- (void)removeMomentsForYear:(id)arg1;
- (void)removeMomentsForYearAtIndexes:(id)arg1;
- (void)removeMomentsForYearObject:(id)arg1;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned int)arg1;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned int)arg1;
- (void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2;
- (void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setMoments:(id)arg1;
- (BOOL)supportsDiagnosticInformation;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (void)willSave;

@end
