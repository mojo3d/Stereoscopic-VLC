/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface BRMediaPlayerManager : NSObject
{
    NSMutableDictionary *_players;
    NSMutableSet *_singletonClasses;
    NSMutableDictionary *_singletons;
    BOOL _weAreSuppressingBackgroundProcessing;
}

+ (void)registerPlayerClass:(Class)fp8 forType:(int)fp12 allowMultipleInstances:(BOOL)fp16 error:(id *)fp20;
+ (id)playerForMediaAsset:(id)fp8 error:(id *)fp12;
+ (id)playerForContentType:(int)fp8 error:(id *)fp12;
+ (void)silenceAudioPlayback;
+ (void)stopActiveMediaPlayersWithMediaFromProvider:(id)fp8;
+ (void)checkPlayersForValidityOfCurrentAsset;
- (id)init;
- (void)dealloc;

@end

