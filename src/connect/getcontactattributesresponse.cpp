// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactattributesresponse.h"
#include "getcontactattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::GetContactAttributesResponse
 * \brief The GetContactAttributesResponse class provides an interace for Connect GetContactAttributes responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::getContactAttributes
 */

/*!
 * Constructs a GetContactAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactAttributesResponse::GetContactAttributesResponse(
        const GetContactAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new GetContactAttributesResponsePrivate(this), parent)
{
    setRequest(new GetContactAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactAttributesRequest * GetContactAttributesResponse::request() const
{
    Q_D(const GetContactAttributesResponse);
    return static_cast<const GetContactAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect GetContactAttributes \a response.
 */
void GetContactAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::GetContactAttributesResponsePrivate
 * \brief The GetContactAttributesResponsePrivate class provides private implementation for GetContactAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a GetContactAttributesResponsePrivate object with public implementation \a q.
 */
GetContactAttributesResponsePrivate::GetContactAttributesResponsePrivate(
    GetContactAttributesResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect GetContactAttributes response element from \a xml.
 */
void GetContactAttributesResponsePrivate::parseGetContactAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
