/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ExportImageProtocol.h"
#import "CDStructures.h"

@class ArchiveDocument, ExportController, ImageDB, NSArray, NSMutableArray, NSString, Thumbnailer;

@interface ExportMgr : NSObject <ExportImageProtocol>
{
    ArchiveDocument *mDocument;
    NSMutableArray *mExporters;
    NSArray *mSelectedAlbumsArray;
    struct IPPhotoList *mSelection;
    struct IPPhotoList *mMovieSelection;
    struct IPAlbumList *mSelectedAlbums;
    ExportController *mExportController;
    ImageDB *mDB;
    Thumbnailer *mThumbnailer;
    NSString *mOriginalDateFormatString;
    NSString *mDateTimeFormat;
    unsigned int mSessionID;
    struct _NSSize mLastExportSize;
}

+ (id)exportMgr;
+ (id)exportMgrNoAlloc;
//+ (struct _NSSize)exportImage:(struct IPPhotoInfo *)arg1 dest:(id)arg2 format:(unsigned long)arg3 quality:(float)arg4 rotation:(float)arg5 width:(unsigned int)arg6 height:(unsigned int)arg7 metadata:(int)arg8;
+ (struct _NSSize)exportImage:(void *)arg1 dest:(id)arg2 format:(unsigned long)arg3 quality:(float)arg4 rotation:(float)arg5 width:(unsigned int)arg6 height:(unsigned int)arg7 metadata:(int)arg8;
- (id)init;
- (void)dealloc;
- (void)releasePlugins;
- (void)setExportController:(id)arg1;
- (id)exportController;
- (void)setDocument:(id)arg1;
- (id)document;
- (void)updateDocumentSelection;
- (unsigned int)count;
- (id)recAtIndex:(unsigned int)arg1;
- (void)scanForExporters;
- (unsigned int)imageCount;
- (BOOL)imageIsEditedAtIndex:(unsigned int)arg1;
- (BOOL)imageIsPortraitAtIndex:(unsigned int)arg1;
- (id)imagePathAtIndex:(unsigned int)arg1;
- (id)sourcePathAtIndex:(unsigned int)arg1;
- (struct _NSSize)imageSizeAtIndex:(unsigned int)arg1;
- (unsigned long)imageFormatAtIndex:(unsigned int)arg1;
- (unsigned long)originalImageFormatAtIndex:(unsigned int)arg1;
- (BOOL)originalIsRawAtIndex:(unsigned int)arg1;
- (BOOL)originalIsMovieAtIndex:(unsigned int)arg1;
- (id)imageTitleAtIndex:(unsigned int)arg1;
- (id)imageCommentsAtIndex:(unsigned int)arg1;
- (float)imageRotationAtIndex:(unsigned int)arg1;
- (id)thumbnailPathAtIndex:(unsigned int)arg1;
- (float)imageAspectRatioAtIndex:(unsigned int)arg1;
- (unsigned long long)imageFileSizeAtIndex:(unsigned int)arg1;
- (id)imageDateAtIndex:(unsigned int)arg1;
- (int)imageRatingAtIndex:(unsigned int)arg1;
- (id)imageTiffPropertiesAtIndex:(unsigned int)arg1;
- (id)imageExifPropertiesAtIndex:(unsigned int)arg1;
- (id)imageKeywordsAtIndex:(unsigned int)arg1;
- (id)imageFileNameAtIndex:(unsigned int)arg1;
- (void)commitImageRotation;
- (unsigned int)albumCount;
- (unsigned int)imageCountAtAlbumIndex:(unsigned int)arg1;
- (id)albumNameAtIndex:(unsigned int)arg1;
- (id)albumMusicPathAtIndex:(unsigned int)arg1;
- (id)albumCommentsAtIndex:(unsigned int)arg1;
- (id)albumsOfImageAtIndex:(unsigned int)arg1;
- (unsigned int)positionOfImageAtIndex:(unsigned int)arg1 inAlbum:(unsigned int)arg2;
- (struct IPPhotoInfo *)photoAtIndex:(unsigned int)arg1;
- (void)enableControls;
- (void)disableControls;
- (id)window;
- (void)clickExport;
- (void)startExport;
- (void)cancelExport;
- (void)cancelExportBeforeBeginning;
- (void)markFilesExported;
- (id)directoryPath;
- (unsigned int)sessionID;
- (id)temporaryDirectory;
- (BOOL)doesFileExist:(id)arg1;
- (BOOL)doesDirectoryExist:(id)arg1;
- (BOOL)createDir:(id)arg1;
- (id)uniqueSubPath:(id)arg1 child:(id)arg2;
- (id)makeUniquePath:(id)arg1;
- (id)makeUniqueFilePath:(id)arg1 extension:(id)arg2;
- (id)makeUniqueFileNameWithTime:(id)arg1;
- (BOOL)makeFSSpec:(id)arg1 spec:(struct FSSpec *)arg2;
- (id)pathForFSSpec:(struct FSSpec *)arg1;
- (BOOL)getFSRef:(struct FSRef *)arg1 forPath:(id)arg2 isDirectory:(BOOL)arg3;
- (id)pathForFSRef:(struct FSRef *)arg1;
- (unsigned long)countFiles:(id)arg1 descend:(BOOL)arg2;
- (unsigned long)countFilesFromArray:(id)arg1 descend:(BOOL)arg2;
- (unsigned long long)sizeAtPath:(id)arg1 count:(unsigned long *)arg2 physical:(BOOL)arg3;
- (BOOL)isAliasFileAtPath:(id)arg1;
- (id)pathContentOfAliasAtPath:(id)arg1;
- (id)stringByResolvingAliasesInPath:(id)arg1;
- (BOOL)ensurePermissions:(unsigned long)arg1 forPath:(id)arg2;
- (id)validFilename:(id)arg1;
- (id)getExtensionForImageFormat:(unsigned long)arg1;
- (unsigned long)getImageFormatForExtension:(id)arg1;
- (struct OpaqueGrafPtr *)uncompressImage:(id)arg1 size:(struct _NSSize)arg2 pixelFormat:(unsigned long)arg3 rotation:(float)arg4 colorProfile:(char ***)arg5;
- (void *)createThumbnailer;
- (void *)retainThumbnailer:(void *)arg1;
- (void *)autoreleaseThumbnailer:(void *)arg1;
- (void)releaseThumbnailer:(void *)arg1;
- (void)setThumbnailer:(void *)arg1 maxBytes:(unsigned int)arg2 maxWidth:(unsigned int)arg3 maxHeight:(unsigned int)arg4;
- (struct _NSSize)thumbnailerMaxBounds:(void *)arg1;
- (void)setThumbnailer:(void *)arg1 quality:(int)arg2;
- (int)thumbnailerQuality:(void *)arg1;
- (void)setThumbnailer:(void *)arg1 rotation:(float)arg2;
- (float)thumbnailerRotation:(void *)arg1;
- (void)setThumbnailer:(void *)arg1 outputFormat:(unsigned long)arg2;
- (unsigned long)thumbnailerOutputFormat:(void *)arg1;
- (void)setThumbnailer:(void *)arg1 outputExtension:(id)arg2;
- (id)thumbnailerOutputExtension:(void *)arg1;
- (BOOL)thumbnailer:(void *)arg1 createThumbnail:(id)arg2 dest:(id)arg3;
- (struct _NSSize)lastImageSize:(void *)arg1;
- (struct _NSSize)lastThumbnailSize:(void *)arg1;
//- (BOOL)exportImageAtIndex:(unsigned int)arg1 dest:(id)arg2 options:(CDStruct_d40de4bb *)arg3; // not needed for now
- (BOOL)exportImageAtIndex:(unsigned int)arg1 dest:(id)arg2 options:(void *)arg3;
- (struct _NSSize)lastExportedImageSize;
- (BOOL)_checkForChangedDateLayout;

@end
