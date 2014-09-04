//
//  SPTPartialPlaylist.h
//  Basic Auth
//
//  Created by Daniel Kennett on 19/11/2013.
/*
 Copyright 2013 Spotify AB

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "SPTPartialObject.h"
#import "SPTJSONDecoding.h"
#import "SPTTypes.h"

@class SPTUser;

/** Represents a "partial" playlist on the Spotify service. You can promote this
 to a full playlist object using `SPTRequest`. */
@interface SPTPartialPlaylist : NSObject <SPTPartialObject, SPTJSONObject, SPTTrackProvider>

///----------------------------
/// @name Properties
///----------------------------

/** The name of the playlist. */
@property (nonatomic, readonly, copy) NSString *name;

/** The Spotify URI of the playlist. */
@property (nonatomic, readonly, copy) NSURL *uri;

/** The playable Spotify URI for the playlist. */
@property (nonatomic, readonly, copy) NSURL *playableUri;

/** The owner of the playlist. */
@property (nonatomic, readonly) SPTUser *owner;

/** `YES` if the playlist is collaborative (i.e., can be modified by anyone), otherwise `NO`. */
@property (nonatomic, readonly) BOOL isCollaborative;

/** `YES` if the playlist is public (i.e., can be seen by anyone), otherwise `NO`. */
@property (nonatomic, readonly) BOOL isPublic;

/** The number of tracks in the playlist. */
@property (nonatomic, readonly) NSUInteger trackCount;

@end
