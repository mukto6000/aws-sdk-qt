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

#include "listhsmsresponse.h"
#include "listhsmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ListHsmsResponse
 *
 * \brief The ListHsmsResponse class encapsulates CloudHSM ListHsms responses.
 *
 * \ingroup CloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::listHsms
 */

/*!
 * @brief  Constructs a new ListHsmsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHsmsResponse::ListHsmsResponse(
        const ListHsmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ListHsmsResponsePrivate(this), parent)
{
    setRequest(new ListHsmsRequest(request));
    setReply(reply);
}

const ListHsmsRequest * ListHsmsResponse::request() const
{
    Q_D(const ListHsmsResponse);
    return static_cast<const ListHsmsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM ListHsms response.
 *
 * @param  response  Response to parse.
 */
void ListHsmsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListHsmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListHsmsResponsePrivate
 *
 * \brief Private implementation for ListHsmsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListHsmsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHsmsResponse instance.
 */
ListHsmsResponsePrivate::ListHsmsResponsePrivate(
    ListHsmsResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM ListHsmsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHsmsResponsePrivate::parseListHsmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHsmsResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
