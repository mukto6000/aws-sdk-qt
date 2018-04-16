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

#include "searchfacesbyimagerequest.h"
#include "searchfacesbyimagerequest_p.h"
#include "searchfacesbyimageresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::SearchFacesByImageRequest
 *
 * \brief The SearchFacesByImageRequest class encapsulates Rekognition SearchFacesByImage requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::searchFacesByImage
 */

/*!
 * @brief  Constructs a new SearchFacesByImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchFacesByImageRequest::SearchFacesByImageRequest(const SearchFacesByImageRequest &other)
    : RekognitionRequest(new SearchFacesByImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SearchFacesByImageRequest object.
 */
SearchFacesByImageRequest::SearchFacesByImageRequest()
    : RekognitionRequest(new SearchFacesByImageRequestPrivate(RekognitionRequest::SearchFacesByImageAction, this))
{

}

/*!
 * \reimp
 */
bool SearchFacesByImageRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SearchFacesByImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchFacesByImageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchFacesByImageRequest::response(QNetworkReply * const reply) const
{
    return new SearchFacesByImageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SearchFacesByImageRequestPrivate
 *
 * @brief  Private implementation for SearchFacesByImageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SearchFacesByImageRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public SearchFacesByImageRequest instance.
 */
SearchFacesByImageRequestPrivate::SearchFacesByImageRequestPrivate(
    const RekognitionRequest::Action action, SearchFacesByImageRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SearchFacesByImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchFacesByImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchFacesByImageRequest instance.
 */
SearchFacesByImageRequestPrivate::SearchFacesByImageRequestPrivate(
    const SearchFacesByImageRequestPrivate &other, SearchFacesByImageRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
