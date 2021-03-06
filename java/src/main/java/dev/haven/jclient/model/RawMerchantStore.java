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
import dev.haven.jclient.model.Address;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * RawMerchantStore
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-10-01T15:03:22.973823-07:00[America/Los_Angeles]")
public class RawMerchantStore {
  public static final String SERIALIZED_NAME_MID = "mid";
  @SerializedName(SERIALIZED_NAME_MID)
  private String mid;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_ADDRESS = "address";
  @SerializedName(SERIALIZED_NAME_ADDRESS)
  private Address address = null;

  public RawMerchantStore mid(String mid) {
    this.mid = mid;
    return this;
  }

   /**
   * Get mid
   * @return mid
  **/
  @ApiModelProperty(value = "")
  public String getMid() {
    return mid;
  }

  public void setMid(String mid) {
    this.mid = mid;
  }

  public RawMerchantStore name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public RawMerchantStore address(Address address) {
    this.address = address;
    return this;
  }

   /**
   * Get address
   * @return address
  **/
  @ApiModelProperty(value = "")
  public Address getAddress() {
    return address;
  }

  public void setAddress(Address address) {
    this.address = address;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RawMerchantStore rawMerchantStore = (RawMerchantStore) o;
    return Objects.equals(this.mid, rawMerchantStore.mid) &&
        Objects.equals(this.name, rawMerchantStore.name) &&
        Objects.equals(this.address, rawMerchantStore.address);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mid, name, address);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RawMerchantStore {\n");
    sb.append("    mid: ").append(toIndentedString(mid)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
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

