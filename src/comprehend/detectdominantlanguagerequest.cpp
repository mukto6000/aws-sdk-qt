/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "detectdominantlanguagerequest.h"
#include "detectdominantlanguagerequest_p.h"
#include "detectdominantlanguageresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectDominantLanguageRequest
 *
 * \brief The DetectDominantLanguageRequest class encapsulates Comprehend DetectDominantLanguage requests.
 *
 * \ingroup Comprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectDominantLanguage
 */

/*!
 * @brief  Constructs a new DetectDominantLanguageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectDominantLanguageRequest::DetectDominantLanguageRequest(const DetectDominantLanguageRequest &other)
    : ComprehendRequest(new DetectDominantLanguageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DetectDominantLanguageRequest object.
 */
DetectDominantLanguageRequest::DetectDominantLanguageRequest()
    : ComprehendRequest(new DetectDominantLanguageRequestPrivate(ComprehendRequest::DetectDominantLanguageAction, this))
{

}

/*!
 * \reimp
 */
bool DetectDominantLanguageRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DetectDominantLanguageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectDominantLanguageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectDominantLanguageRequest::response(QNetworkReply * const reply) const
{
    return new DetectDominantLanguageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DetectDominantLanguageRequestPrivate
 *
 * @brief  Private implementation for DetectDominantLanguageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DetectDominantLanguageRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public DetectDominantLanguageRequest instance.
 */
DetectDominantLanguageRequestPrivate::DetectDominantLanguageRequestPrivate(
    const ComprehendRequest::Action action, DetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DetectDominantLanguageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectDominantLanguageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectDominantLanguageRequest instance.
 */
DetectDominantLanguageRequestPrivate::DetectDominantLanguageRequestPrivate(
    const DetectDominantLanguageRequestPrivate &other, DetectDominantLanguageRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
