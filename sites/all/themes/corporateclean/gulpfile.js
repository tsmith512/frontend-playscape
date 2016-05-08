// Gulp
//
// This is not a normal require, because our gulp-help tool (which provides the
// nice task descriptions on the command-line) requires changing the function
// signature of gulp tasks to include the task description.
var gulp = require('gulp-help')(require('gulp'));
/*
// Gulp / Node utilities
var u = require('gulp-util');
var log = u.log;
var c = u.colors;
var del = require('del');
var spawn = require('child_process').spawn;
var sequence = require('run-sequence');

// Basic workflow plugins
var prefix = require('gulp-autoprefixer');
var sass = require('gulp-sass');
var bs = require('browser-sync');
var reload = bs.reload;

// Performance workflow plugins
var concat = require('gulp-concat');
var mincss = require('gulp-minify-css');
var imagemin = require('gulp-imagemin');
var uncss = require('gulp-uncss');
var uglify = require('gulp-uglify');
*/
var critical = require('critical');
/*
// Performance testing plugins
var psi = require('psi');
var wpt = require('webpagetest');
var ngrok = require('ngrok');
*/
// -----------------------------------------------------------------------------
// Generate critical-path CSS
//
// This task generates a small, minimal amount of your CSS based on which rules
// are visible (aka "above the fold") during a page load. We will use a Jekyll
// template command to inline the CSS when the site is generated.
//
// All styles should be directly applying to an element visible when your
// website renders. If the user has to scroll even a small amount, it's not
// critical CSS.
// -----------------------------------------------------------------------------
gulp.task('critical', 'Generates critical CSS for the example site', function (cb) {
  critical.generate({
    base: './',
    src: 'home.html',
    css: ['css/basic-layout.css', 'css/mobile.css'],
    dimensions: [{
      width: 768,
      height: 1024
    },{
      width: 1280,
      height: 960
    }],
    dest: 'css/critical.css',
    minify: true,
    extract: false
  });
});
