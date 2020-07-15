//
//  MSGroup.m
//  DireFloof
//
//  Created by Lucas Menezes on 7/9/20.
//  Copyright © 2020 Keyboard Floofs. All rights reserved.
//

#import "MSGroup.h"
#import <EmojiOne/Emojione.h>
#import "MSAccount.h"
#import "NSDictionary+Sanitation.h"
#import "NSString+HtmlStrip.h"
#import "MastodonConstants.h"


@interface MSGroup ()

@property (nonatomic, strong, readwrite) NSDate *created_at;
@property (nonatomic, strong, readwrite) NSString *_id;
@property (nonatomic, strong, readwrite) NSString *_description;
@property (nonatomic, strong, readwrite) NSString *title;

@end

@implementation MSGroup

 - (id)initWithParams:(NSDictionary *)params
{
    self = [super init];
    
    if (self) {
        
        params = [params removeNullValues];
        
        self._id = [params objectForKey:@"name"];
        self._description = [params objectForKey:@"description"];
        self.created_at = [params objectForKey:@"created_at" ];
        self.is_archived = (bool)[params valueForKey:@"is_archived"];
        self.title = [params objectForKey:@"title"];
        self.member_count = (int)[params valueForKey:@"member_count"];
        
        
    }
    
    return self;
}


@end
