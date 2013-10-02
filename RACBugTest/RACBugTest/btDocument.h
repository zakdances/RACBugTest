//
//  btDocument.h
//  RACBugTest
//
//  Created by Zak.
//  Copyright (c) 2013 Zak. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface btDocument : NSDocument

@property (strong) MGITRepository *repo;

- (IBAction)button:(id)sender;

@end
