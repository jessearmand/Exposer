//
//  JARExposerView.h
//  Exposer
//
//  Created by Jesse Armand on 14/1/13.
//  Copyright (c) 2013 Jesse Armand. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "JARExposerViewDelegate.h"
#import "JARExposerViewDataSource.h"

@class JARExposerContentView;

@interface JARExposerView : UIScrollView

@property (weak, nonatomic) id <JARExposerViewDelegate> delegate;
@property (weak, nonatomic) id <JARExposerViewDataSource> dataSource;

- (JARExposerContentView *)dequeueReusableViewWithIdentifier:(NSString *)viewIdentifier forIndex:(NSUInteger)index;

- (void)reloadData;

- (void)scrollToContentViewAtIndex:(NSUInteger)index animated:(BOOL)animated;

@end