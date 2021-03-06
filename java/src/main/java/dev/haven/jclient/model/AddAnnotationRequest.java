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


package dev.haven.jclient.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import dev.haven.jclient.model.BootstrapStrategy;
import dev.haven.jclient.model.CleanCategory;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * AddAnnotationRequest
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-10-01T15:03:22.973823-07:00[America/Los_Angeles]")
public class AddAnnotationRequest {
  public static final String SERIALIZED_NAME_CATEGORY = "category";
  @SerializedName(SERIALIZED_NAME_CATEGORY)
  private CleanCategory category;

  public static final String SERIALIZED_NAME_MEMO = "memo";
  @SerializedName(SERIALIZED_NAME_MEMO)
  private String memo;

  public static final String SERIALIZED_NAME_EXCLUDE_FROM_BREAKDOWNS = "excludeFromBreakdowns";
  @SerializedName(SERIALIZED_NAME_EXCLUDE_FROM_BREAKDOWNS)
  private Boolean excludeFromBreakdowns;

  public static final String SERIALIZED_NAME_BOOTSTRAP = "bootstrap";
  @SerializedName(SERIALIZED_NAME_BOOTSTRAP)
  private BootstrapStrategy bootstrap;

  public AddAnnotationRequest category(CleanCategory category) {
    this.category = category;
    return this;
  }

   /**
   * Get category
   * @return category
  **/
  @ApiModelProperty(value = "")
  public CleanCategory getCategory() {
    return category;
  }

  public void setCategory(CleanCategory category) {
    this.category = category;
  }

  public AddAnnotationRequest memo(String memo) {
    this.memo = memo;
    return this;
  }

   /**
   * Get memo
   * @return memo
  **/
  @ApiModelProperty(value = "")
  public String getMemo() {
    return memo;
  }

  public void setMemo(String memo) {
    this.memo = memo;
  }

  public AddAnnotationRequest excludeFromBreakdowns(Boolean excludeFromBreakdowns) {
    this.excludeFromBreakdowns = excludeFromBreakdowns;
    return this;
  }

   /**
   * Get excludeFromBreakdowns
   * @return excludeFromBreakdowns
  **/
  @ApiModelProperty(value = "")
  public Boolean getExcludeFromBreakdowns() {
    return excludeFromBreakdowns;
  }

  public void setExcludeFromBreakdowns(Boolean excludeFromBreakdowns) {
    this.excludeFromBreakdowns = excludeFromBreakdowns;
  }

  public AddAnnotationRequest bootstrap(BootstrapStrategy bootstrap) {
    this.bootstrap = bootstrap;
    return this;
  }

   /**
   * Get bootstrap
   * @return bootstrap
  **/
  @ApiModelProperty(required = true, value = "")
  public BootstrapStrategy getBootstrap() {
    return bootstrap;
  }

  public void setBootstrap(BootstrapStrategy bootstrap) {
    this.bootstrap = bootstrap;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AddAnnotationRequest addAnnotationRequest = (AddAnnotationRequest) o;
    return Objects.equals(this.category, addAnnotationRequest.category) &&
        Objects.equals(this.memo, addAnnotationRequest.memo) &&
        Objects.equals(this.excludeFromBreakdowns, addAnnotationRequest.excludeFromBreakdowns) &&
        Objects.equals(this.bootstrap, addAnnotationRequest.bootstrap);
  }

  @Override
  public int hashCode() {
    return Objects.hash(category, memo, excludeFromBreakdowns, bootstrap);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AddAnnotationRequest {\n");
    sb.append("    category: ").append(toIndentedString(category)).append("\n");
    sb.append("    memo: ").append(toIndentedString(memo)).append("\n");
    sb.append("    excludeFromBreakdowns: ").append(toIndentedString(excludeFromBreakdowns)).append("\n");
    sb.append("    bootstrap: ").append(toIndentedString(bootstrap)).append("\n");
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

