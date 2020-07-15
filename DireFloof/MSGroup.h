//
//  MSStatus.h
//  DireFloof
//
//  Created by John Gabelmann on 2/12/17.
//  Copyright © 2017 Keyboard Floofs. All rights reserved.
//
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#import <Foundation/Foundation.h>
#import "MSAccount.h"
#import "MSApplication.h"

@interface MSGroup : NSObject

#pragma mark - Properties
//created_at: "2018-10-03T15:33:09.000Z",
//description: "Group to help support each other, share stories, answer questions as we can.
//Not dedicated to any distro.",
//id: "1501",
//is_archived: false,
//member_count: 1596,
//title: "Linux Users of Gab",
@property (nonatomic, strong, readonly) NSDate *created_at;
@property (nonatomic, strong, readonly) NSString *_id;
@property (nonatomic, strong, readonly) NSString *_description;
@property (nonatomic, assign) BOOL is_archived;
@property (nonatomic, assign) int member_count;
@property (nonatomic, strong, readonly) NSString *title;



#pragma mark - Initializers

- (id)initWithParams:(NSDictionary *)params;


#pragma mark - Instance Methods

- (NSDictionary *)toJSON;

@end
