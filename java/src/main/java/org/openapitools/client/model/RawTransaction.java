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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.RawMerchant;
import org.openapitools.client.model.RawMerchantStore;
import org.openapitools.client.model.TransactionState;
import org.threeten.bp.OffsetDateTime;

/**
 * RawTransaction
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-10-01T14:12:58.255201-07:00[America/Los_Angeles]")
public class RawTransaction {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_ACCOUNT = "account";
  @SerializedName(SERIALIZED_NAME_ACCOUNT)
  private String account;

  public static final String SERIALIZED_NAME_USER = "user";
  @SerializedName(SERIALIZED_NAME_USER)
  private String user;

  public static final String SERIALIZED_NAME_RAW_MEMO = "rawMemo";
  @SerializedName(SERIALIZED_NAME_RAW_MEMO)
  private String rawMemo;

  public static final String SERIALIZED_NAME_MERCHANT = "merchant";
  @SerializedName(SERIALIZED_NAME_MERCHANT)
  private RawMerchant merchant = null;

  public static final String SERIALIZED_NAME_STORE = "store";
  @SerializedName(SERIALIZED_NAME_STORE)
  private RawMerchantStore store = null;

  public static final String SERIALIZED_NAME_NETWORK = "network";
  @SerializedName(SERIALIZED_NAME_NETWORK)
  private String network;

  public static final String SERIALIZED_NAME_USER_TRANSACTED_AT = "userTransactedAt";
  @SerializedName(SERIALIZED_NAME_USER_TRANSACTED_AT)
  private OffsetDateTime userTransactedAt;

  public static final String SERIALIZED_NAME_AMOUNT = "amount";
  @SerializedName(SERIALIZED_NAME_AMOUNT)
  private String amount;

  public static final String SERIALIZED_NAME_CATEGORIES = "categories";
  @SerializedName(SERIALIZED_NAME_CATEGORIES)
  private List<String> categories = new ArrayList<String>();

  public static final String SERIALIZED_NAME_KIND = "kind";
  @SerializedName(SERIALIZED_NAME_KIND)
  private String kind;

  public static final String SERIALIZED_NAME_STATE = "state";
  @SerializedName(SERIALIZED_NAME_STATE)
  private TransactionState state;

  public static final String SERIALIZED_NAME_TAGS = "tags";
  @SerializedName(SERIALIZED_NAME_TAGS)
  private List<String> tags = new ArrayList<String>();

  public RawTransaction id(String id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(required = true, value = "")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public RawTransaction account(String account) {
    this.account = account;
    return this;
  }

   /**
   * Get account
   * @return account
  **/
  @ApiModelProperty(required = true, value = "")
  public String getAccount() {
    return account;
  }

  public void setAccount(String account) {
    this.account = account;
  }

  public RawTransaction user(String user) {
    this.user = user;
    return this;
  }

   /**
   * Get user
   * @return user
  **/
  @ApiModelProperty(required = true, value = "")
  public String getUser() {
    return user;
  }

  public void setUser(String user) {
    this.user = user;
  }

  public RawTransaction rawMemo(String rawMemo) {
    this.rawMemo = rawMemo;
    return this;
  }

   /**
   * Get rawMemo
   * @return rawMemo
  **/
  @ApiModelProperty(required = true, value = "")
  public String getRawMemo() {
    return rawMemo;
  }

  public void setRawMemo(String rawMemo) {
    this.rawMemo = rawMemo;
  }

  public RawTransaction merchant(RawMerchant merchant) {
    this.merchant = merchant;
    return this;
  }

   /**
   * Get merchant
   * @return merchant
  **/
  @ApiModelProperty(value = "")
  public RawMerchant getMerchant() {
    return merchant;
  }

  public void setMerchant(RawMerchant merchant) {
    this.merchant = merchant;
  }

  public RawTransaction store(RawMerchantStore store) {
    this.store = store;
    return this;
  }

   /**
   * Get store
   * @return store
  **/
  @ApiModelProperty(value = "")
  public RawMerchantStore getStore() {
    return store;
  }

  public void setStore(RawMerchantStore store) {
    this.store = store;
  }

  public RawTransaction network(String network) {
    this.network = network;
    return this;
  }

   /**
   * Get network
   * @return network
  **/
  @ApiModelProperty(value = "")
  public String getNetwork() {
    return network;
  }

  public void setNetwork(String network) {
    this.network = network;
  }

  public RawTransaction userTransactedAt(OffsetDateTime userTransactedAt) {
    this.userTransactedAt = userTransactedAt;
    return this;
  }

   /**
   * Get userTransactedAt
   * @return userTransactedAt
  **/
  @ApiModelProperty(value = "")
  public OffsetDateTime getUserTransactedAt() {
    return userTransactedAt;
  }

  public void setUserTransactedAt(OffsetDateTime userTransactedAt) {
    this.userTransactedAt = userTransactedAt;
  }

  public RawTransaction amount(String amount) {
    this.amount = amount;
    return this;
  }

   /**
   * Get amount
   * @return amount
  **/
  @ApiModelProperty(required = true, value = "")
  public String getAmount() {
    return amount;
  }

  public void setAmount(String amount) {
    this.amount = amount;
  }

  public RawTransaction categories(List<String> categories) {
    this.categories = categories;
    return this;
  }

  public RawTransaction addCategoriesItem(String categoriesItem) {
    this.categories.add(categoriesItem);
    return this;
  }

   /**
   * Get categories
   * @return categories
  **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getCategories() {
    return categories;
  }

  public void setCategories(List<String> categories) {
    this.categories = categories;
  }

  public RawTransaction kind(String kind) {
    this.kind = kind;
    return this;
  }

   /**
   * Get kind
   * @return kind
  **/
  @ApiModelProperty(required = true, value = "")
  public String getKind() {
    return kind;
  }

  public void setKind(String kind) {
    this.kind = kind;
  }

  public RawTransaction state(TransactionState state) {
    this.state = state;
    return this;
  }

   /**
   * Get state
   * @return state
  **/
  @ApiModelProperty(required = true, value = "")
  public TransactionState getState() {
    return state;
  }

  public void setState(TransactionState state) {
    this.state = state;
  }

  public RawTransaction tags(List<String> tags) {
    this.tags = tags;
    return this;
  }

  public RawTransaction addTagsItem(String tagsItem) {
    this.tags.add(tagsItem);
    return this;
  }

   /**
   * Get tags
   * @return tags
  **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getTags() {
    return tags;
  }

  public void setTags(List<String> tags) {
    this.tags = tags;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RawTransaction rawTransaction = (RawTransaction) o;
    return Objects.equals(this.id, rawTransaction.id) &&
        Objects.equals(this.account, rawTransaction.account) &&
        Objects.equals(this.user, rawTransaction.user) &&
        Objects.equals(this.rawMemo, rawTransaction.rawMemo) &&
        Objects.equals(this.merchant, rawTransaction.merchant) &&
        Objects.equals(this.store, rawTransaction.store) &&
        Objects.equals(this.network, rawTransaction.network) &&
        Objects.equals(this.userTransactedAt, rawTransaction.userTransactedAt) &&
        Objects.equals(this.amount, rawTransaction.amount) &&
        Objects.equals(this.categories, rawTransaction.categories) &&
        Objects.equals(this.kind, rawTransaction.kind) &&
        Objects.equals(this.state, rawTransaction.state) &&
        Objects.equals(this.tags, rawTransaction.tags);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, account, user, rawMemo, merchant, store, network, userTransactedAt, amount, categories, kind, state, tags);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RawTransaction {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    account: ").append(toIndentedString(account)).append("\n");
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
    sb.append("    rawMemo: ").append(toIndentedString(rawMemo)).append("\n");
    sb.append("    merchant: ").append(toIndentedString(merchant)).append("\n");
    sb.append("    store: ").append(toIndentedString(store)).append("\n");
    sb.append("    network: ").append(toIndentedString(network)).append("\n");
    sb.append("    userTransactedAt: ").append(toIndentedString(userTransactedAt)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    categories: ").append(toIndentedString(categories)).append("\n");
    sb.append("    kind: ").append(toIndentedString(kind)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    tags: ").append(toIndentedString(tags)).append("\n");
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

