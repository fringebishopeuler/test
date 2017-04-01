/* Program to test microswitch with external input
 * - This program uses the integrator algorithm to do the soft-debouncing that
 *   mechanical switches demand, preventing the multiple firing of events, due to 
 *   the mechanical switch being pressed or to noise in the input line.
 * - The integrator algorithm is used in conjunction with ISR to determine the
 *   event asynchronously.
