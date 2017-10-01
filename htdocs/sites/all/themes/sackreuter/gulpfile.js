'use strict';

// Include Gulp & some usefull plugin
var gulp        = require("gulp");
var sass        = require("gulp-sass");

// Include plugins
// @see https://www.npmjs.com/package/gulp-load-plugins
var $ = require('gulp-load-plugins')({
    pattern: ['gulp-*', 'gulp.*', 'main-bower-files'],
    replaceString: /\bgulp[\-.]/,
    rename: {
        'gulp-css-url-adjuster': 'urladjuster'
    }
});

// Error notifications
var reportError = function (error) {
    console.log(error.toString());
    $.notify({
        title: 'Gulp Task Error',
        message: 'Check the console.'
    }).write(error);
    this.emit('end');
};



/**
 *
 * INDIVIDUAL PROCESSING TASKS
 *
 * */
gulp.task('sass', function () {
    return gulp.src('scss/**/*.scss')
        .pipe($.sourcemaps.init())
        .pipe($.sass())
        .on('error', reportError)
        .pipe($.sourcemaps.write({includeContent: false}))
        .pipe($.sourcemaps.init({loadMaps: true}))
        .pipe($.autoprefixer({
            browsers: [
                "Android 2.3",
                "Android >= 4",
                "Chrome >= 20",
                "Firefox >= 24",
                "Explorer >= 8",
                "iOS >= 6",
                "Opera >= 12",
                "Safari >= 6"
            ],
            cascade: false
        }))
        .pipe($.sourcemaps.write(''))
        .pipe(gulp.dest('css'));
});

// COMPRESS/OPTIMIZE TASKS
// Optimize Images
gulp.task('images', function () {
    return gulp.src('images/**/*')
        .pipe($.imagemin({
            progressive: true,
            interlaced: true,
            svgoPlugins: [{
                cleanupIDs: false
            }]
        }))
        .pipe(gulp.dest('images'));
});


// MAIN TASKS
// Default watch
// Default task to be run with `gulp`
gulp.task('default', ['sass'], function () {
    gulp.watch("scss/**/*.scss", ['sass']);
});

// Prod prepare files task
gulp.task('prod', ['sass', 'images']);
