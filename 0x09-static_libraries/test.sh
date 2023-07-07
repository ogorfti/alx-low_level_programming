#!/bin/bash

# Define colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
PURPLE='\033[0;35m'
NC='\033[0m'

# Define print functions
function print_header() {
  echo -e "\n${GREEN}<======================================================>"
  echo -e "\t\tCraeting Static Library"
  echo -e "<======================================================>${NC}\n"
}

function print_footer() {
  echo -e "\n${GREEN}<======================================================>${NC}\n"
}

function print_info() {
  echo -en "${PURPLE}[+]${NC} $1"
}

function print_error() {
  echo -en "${RED}[!]${NC} $1"
}

function print_warning() {
  echo -en "${YELLOW}[!]${NC} $1"
}

function print_success(){
  echo -en "${GREEN}[+]${NC} $1"
}

# Print header
print_header

# Compile the source code into object files
print_info "Compiling source code into object files..."
if gcc -c -Wall -pedantic -Werror -Wextra -I. ./*.c; then
  echo -e "${GREEN}\t[ done ]${NC}"
else
  echo -e "${RED}\t[ failed ]${NC}"
  print_error "Failed to compile source code.\n"
  print_footer
  exit 1
fi

# Create the static library archive
print_info "Creating static library archive..."
if ar rcs liball.a ./*.o; then
  echo -e "${GREEN}\t\t[ done ]${NC}"
else
  echo -e "${RED}\t\t[ failed ]${NC}"
  print_error "Failed to create static library archive.\n"
  print_footer
  exit 1
fi

# Clean up object files
print_info "Cleaning up object files\t"
if rm ./*.o; then
  echo -e "${GREEN}\t\t[ done ]${NC}"
else
  echo -e "${RED}\t\t[ failed ]${NC}"
  print_warning "Warning: Failed to clean up object files.\n"
fi

# Print footer
print_footer
