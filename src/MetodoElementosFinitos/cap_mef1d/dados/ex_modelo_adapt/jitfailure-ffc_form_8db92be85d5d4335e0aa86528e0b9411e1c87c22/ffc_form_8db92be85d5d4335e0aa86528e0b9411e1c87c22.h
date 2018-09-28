// This code conforms with the UFC specification version 2017.2.0
// and was automatically generated by FFC version 2017.2.0.
//
// This code was generated with the following parameters:
//

//  add_tabulate_tensor_timing:     False
//  convert_exceptions_to_warnings: False
//  cpp_optimize:                   True
//  cpp_optimize_flags:             '-O2'
//  epsilon:                        1e-14
//  error_control:                  False
//  external_include_dirs:          ''
//  external_includes:              ''
//  external_libraries:             ''
//  external_library_dirs:          ''
//  form_postfix:                   False
//  format:                         'ufc'
//  generate_dummy_tabulate_tensor: False
//  max_signature_length:           0
//  no-evaluate_basis_derivatives:  True
//  optimize:                       True
//  precision:                      None
//  quadrature_degree:              None
//  quadrature_rule:                None
//  representation:                 'auto'
//  split:                          False

#ifndef __FFC_FORM_8DB92BE85D5D4335E0AA86528E0B9411E1C87C22_H
#define __FFC_FORM_8DB92BE85D5D4335E0AA86528E0B9411E1C87C22_H
#include "ffc_coordinate_mapping_6edea55ab240c4169138312a4fd41d9b681a7166.h"
#include "ffc_element_0fec4b083a6593131f559cf21e5448c0f3d8456e.h"
#include "ffc_element_50da0ce57c35beb4e107029c812314ee1c0a321c.h"
#include "ffc_element_8cdf7e4a46861af16363c8d9dd5807cf5eb2e11e.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <ufc.h>

class ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_cell_integral_main_otherwise: public ufc::cell_integral
{
public:

  ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_cell_integral_main_otherwise();

  ~ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_cell_integral_main_otherwise() override;

  const std::vector<bool> & enabled_coefficients() const final override;

  void tabulate_tensor(double * A,
                       const double * const * w,
                       const double * coordinate_dofs,
                       int cell_orientation) const final override;

};

extern "C" ufc::cell_integral * create_ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_cell_integral_main_otherwise();


class ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_form_main: public ufc::form
{
public:

  ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_form_main();

  ~ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_form_main() override;

  const char * signature() const final override;

  std::size_t rank() const final override;

  std::size_t num_coefficients() const final override;

  std::size_t original_coefficient_position(std::size_t i) const final override;

  ufc::finite_element * create_coordinate_finite_element() const final override;

  ufc::dofmap * create_coordinate_dofmap() const final override;

  ufc::coordinate_mapping * create_coordinate_mapping() const final override;

  ufc::finite_element * create_finite_element(std::size_t i) const final override;

  ufc::dofmap * create_dofmap(std::size_t i) const final override;

  std::size_t max_cell_subdomain_id() const final override;

  std::size_t max_exterior_facet_subdomain_id() const final override;

  std::size_t max_interior_facet_subdomain_id() const final override;

  std::size_t max_vertex_subdomain_id() const final override;

  std::size_t max_custom_subdomain_id() const final override;

  std::size_t max_cutcell_subdomain_id() const final override;

  std::size_t max_interface_subdomain_id() const final override;

  std::size_t max_overlap_subdomain_id() const final override;

  bool has_cell_integrals() const final override;

  bool has_exterior_facet_integrals() const final override;

  bool has_interior_facet_integrals() const final override;

  bool has_vertex_integrals() const final override;

  bool has_custom_integrals() const final override;

  bool has_cutcell_integrals() const final override;

  bool has_interface_integrals() const final override;

  bool has_overlap_integrals() const final override;

  ufc::cell_integral * create_cell_integral(std::size_t i) const final override;

  ufc::exterior_facet_integral * create_exterior_facet_integral(std::size_t i) const final override;

  ufc::interior_facet_integral * create_interior_facet_integral(std::size_t i) const final override;

  ufc::vertex_integral * create_vertex_integral(std::size_t i) const final override;

  ufc::custom_integral * create_custom_integral(std::size_t i) const final override;

  ufc::cutcell_integral * create_cutcell_integral(std::size_t i) const final override;

  ufc::interface_integral * create_interface_integral(std::size_t i) const final override;

  ufc::overlap_integral * create_overlap_integral(std::size_t i) const final override;

  ufc::cell_integral * create_default_cell_integral() const final override;

  ufc::exterior_facet_integral * create_default_exterior_facet_integral() const final override;

  ufc::interior_facet_integral * create_default_interior_facet_integral() const final override;

  ufc::vertex_integral * create_default_vertex_integral() const final override;

  ufc::custom_integral * create_default_custom_integral() const final override;

  ufc::cutcell_integral * create_default_cutcell_integral() const final override;

  ufc::interface_integral * create_default_interface_integral() const final override;

  ufc::overlap_integral * create_default_overlap_integral() const final override;

};

extern "C" ufc::form * create_ffc_form_8db92be85d5d4335e0aa86528e0b9411e1c87c22_form_main();

#endif
