/*
 * Haven Money API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * InstitutionColors
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-10-01T14:12:58.255201-07:00[America/Los_Angeles]")
public class InstitutionColors {
  public static final String SERIALIZED_NAME_DARK = "dark";
  @SerializedName(SERIALIZED_NAME_DARK)
  private String dark;

  public static final String SERIALIZED_NAME_DARKER = "darker";
  @SerializedName(SERIALIZED_NAME_DARKER)
  private String darker;

  public static final String SERIALIZED_NAME_LIGHT = "light";
  @SerializedName(SERIALIZED_NAME_LIGHT)
  private String light;

  public static final String SERIALIZED_NAME_PRIMARY = "primary";
  @SerializedName(SERIALIZED_NAME_PRIMARY)
  private String primary;

  public InstitutionColors dark(String dark) {
    this.dark = dark;
    return this;
  }

   /**
   * Get dark
   * @return dark
  **/
  @ApiModelProperty(required = true, value = "")
  public String getDark() {
    return dark;
  }

  public void setDark(String dark) {
    this.dark = dark;
  }

  public InstitutionColors darker(String darker) {
    this.darker = darker;
    return this;
  }

   /**
   * Get darker
   * @return darker
  **/
  @ApiModelProperty(required = true, value = "")
  public String getDarker() {
    return darker;
  }

  public void setDarker(String darker) {
    this.darker = darker;
  }

  public InstitutionColors light(String light) {
    this.light = light;
    return this;
  }

   /**
   * Get light
   * @return light
  **/
  @ApiModelProperty(required = true, value = "")
  public String getLight() {
    return light;
  }

  public void setLight(String light) {
    this.light = light;
  }

  public InstitutionColors primary(String primary) {
    this.primary = primary;
    return this;
  }

   /**
   * Get primary
   * @return primary
  **/
  @ApiModelProperty(required = true, value = "")
  public String getPrimary() {
    return primary;
  }

  public void setPrimary(String primary) {
    this.primary = primary;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InstitutionColors institutionColors = (InstitutionColors) o;
    return Objects.equals(this.dark, institutionColors.dark) &&
        Objects.equals(this.darker, institutionColors.darker) &&
        Objects.equals(this.light, institutionColors.light) &&
        Objects.equals(this.primary, institutionColors.primary);
  }

  @Override
  public int hashCode() {
    return Objects.hash(dark, darker, light, primary);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InstitutionColors {\n");
    sb.append("    dark: ").append(toIndentedString(dark)).append("\n");
    sb.append("    darker: ").append(toIndentedString(darker)).append("\n");
    sb.append("    light: ").append(toIndentedString(light)).append("\n");
    sb.append("    primary: ").append(toIndentedString(primary)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}
