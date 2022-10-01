// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecordrequest.h"
#include "getrecordrequest_p.h"
#include "getrecordresponse.h"
#include "sagemakerfeaturestoreruntimerequest_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::GetRecordRequest
 * \brief The GetRecordRequest class provides an interface for SageMakerFeatureStoreRuntime GetRecord requests.
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 *
 *  Contains all data plane API operations and data types for the Amazon SageMaker Feature Store. Use this API to put,
 *  delete, and retrieve (get) features from a feature
 * 
 *  store>
 * 
 *  Use the following operations to configure your <code>OnlineStore</code> and <code>OfflineStore</code> features, and to
 *  create and manage feature
 * 
 *  groups> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateFeatureGroup.html">CreateFeatureGroup</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteFeatureGroup.html">DeleteFeatureGroup</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeFeatureGroup.html">DescribeFeatureGroup</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListFeatureGroups.html">ListFeatureGroups</a>
 *
 * \sa SageMakerFeatureStoreRuntimeClient::getRecord
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecordRequest::GetRecordRequest(const GetRecordRequest &other)
    : SageMakerFeatureStoreRuntimeRequest(new GetRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecordRequest object.
 */
GetRecordRequest::GetRecordRequest()
    : SageMakerFeatureStoreRuntimeRequest(new GetRecordRequestPrivate(SageMakerFeatureStoreRuntimeRequest::GetRecordAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecordRequest::response(QNetworkReply * const reply) const
{
    return new GetRecordResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::GetRecordRequestPrivate
 * \brief The GetRecordRequestPrivate class provides private implementation for GetRecordRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a GetRecordRequestPrivate object for SageMakerFeatureStoreRuntime \a action,
 * with public implementation \a q.
 */
GetRecordRequestPrivate::GetRecordRequestPrivate(
    const SageMakerFeatureStoreRuntimeRequest::Action action, GetRecordRequest * const q)
    : SageMakerFeatureStoreRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecordRequest
 * class' copy constructor.
 */
GetRecordRequestPrivate::GetRecordRequestPrivate(
    const GetRecordRequestPrivate &other, GetRecordRequest * const q)
    : SageMakerFeatureStoreRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws
