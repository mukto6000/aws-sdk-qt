// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcesharesresponse.h"
#include "getresourcesharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetResourceSharesResponse
 * \brief The GetResourceSharesResponse class provides an interace for Ram GetResourceShares responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::getResourceShares
 */

/*!
 * Constructs a GetResourceSharesResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceSharesResponse::GetResourceSharesResponse(
        const GetResourceSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new GetResourceSharesResponsePrivate(this), parent)
{
    setRequest(new GetResourceSharesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceSharesRequest * GetResourceSharesResponse::request() const
{
    Q_D(const GetResourceSharesResponse);
    return static_cast<const GetResourceSharesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram GetResourceShares \a response.
 */
void GetResourceSharesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceSharesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::GetResourceSharesResponsePrivate
 * \brief The GetResourceSharesResponsePrivate class provides private implementation for GetResourceSharesResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetResourceSharesResponsePrivate object with public implementation \a q.
 */
GetResourceSharesResponsePrivate::GetResourceSharesResponsePrivate(
    GetResourceSharesResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram GetResourceShares response element from \a xml.
 */
void GetResourceSharesResponsePrivate::parseGetResourceSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceSharesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
