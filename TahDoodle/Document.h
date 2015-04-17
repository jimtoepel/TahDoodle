//
//  Document.h
//  TahDoodle
//
//  Created by Jim Toepel on 4/16/15.
//  Copyright (c) 2015 FunderDevelopment. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument


@property (nonatomic) NSMutableArray *tasks;
@property (nonatomic) IBOutlet NSTableView *tasktable;

-(IBAction)addTasks:(id)sender;

@end

