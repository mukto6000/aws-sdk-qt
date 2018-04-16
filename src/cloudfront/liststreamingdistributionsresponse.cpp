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

#include "liststreamingdistributionsresponse.h"
#include "liststreamingdistributionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsResponse
 *
 * \brief The ListStreamingDistributionsResponse class encapsulates CloudFront ListStreamingDistributions responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listStreamingDistributions
 */

/*!
 * @brief  Constructs a new ListStreamingDistributionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStreamingDistributionsResponse::ListStreamingDistributionsResponse(
        const ListStreamingDistributionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListStreamingDistributionsResponsePrivate(this), parent)
{
    setRequest(new ListStreamingDistributionsRequest(request));
    setReply(reply);
}

const ListStreamingDistributionsRequest * ListStreamingDistributionsResponse::request() const
{
    Q_D(const ListStreamingDistributionsResponse);
    return static_cast<const ListStreamingDistributionsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront ListStreamingDistributions response.
 *
 * @param  response  Response to parse.
 */
void ListStreamingDistributionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListStreamingDistributionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListStreamingDistributionsResponsePrivate
 *
 * \brief Private implementation for ListStreamingDistributionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamingDistributionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStreamingDistributionsResponse instance.
 */
ListStreamingDistributionsResponsePrivate::ListStreamingDistributionsResponsePrivate(
    ListStreamingDistributionsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront ListStreamingDistributionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStreamingDistributionsResponsePrivate::parseListStreamingDistributionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingDistributionsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
