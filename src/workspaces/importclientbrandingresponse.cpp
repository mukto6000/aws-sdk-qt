// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importclientbrandingresponse.h"
#include "importclientbrandingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ImportClientBrandingResponse
 * \brief The ImportClientBrandingResponse class provides an interace for WorkSpaces ImportClientBranding responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows or Amazon Linux desktops for your
 *  users, known as <i>WorkSpaces</i>. WorkSpaces eliminates the need to procure and deploy hardware or install complex
 *  software. You can quickly add or remove users as your needs change. Users can access their virtual desktops from
 *  multiple devices or web
 * 
 *  browsers>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the WorkSpaces
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Amazon WorkSpaces service, see <a href="https://docs.aws.amazon.com/general/latest/gr/wsp.html">WorkSpaces endpoints and
 *  quotas</a> in the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  You can also manage your WorkSpaces resources using the WorkSpaces console, Command Line Interface (CLI), and SDKs. For
 *  more information about administering WorkSpaces, see the <a
 *  href="https://docs.aws.amazon.com/workspaces/latest/adminguide/">Amazon WorkSpaces Administration Guide</a>. For more
 *  information about using the Amazon WorkSpaces client application or web browser to access provisioned WorkSpaces, see
 *  the <a href="https://docs.aws.amazon.com/workspaces/latest/userguide/">Amazon WorkSpaces User Guide</a>. For more
 *  information about using the CLI to manage your WorkSpaces resources, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/workspaces/index.html">WorkSpaces section of the CLI
 *
 * \sa WorkSpacesClient::importClientBranding
 */

/*!
 * Constructs a ImportClientBrandingResponse object for \a reply to \a request, with parent \a parent.
 */
ImportClientBrandingResponse::ImportClientBrandingResponse(
        const ImportClientBrandingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new ImportClientBrandingResponsePrivate(this), parent)
{
    setRequest(new ImportClientBrandingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportClientBrandingRequest * ImportClientBrandingResponse::request() const
{
    Q_D(const ImportClientBrandingResponse);
    return static_cast<const ImportClientBrandingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces ImportClientBranding \a response.
 */
void ImportClientBrandingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportClientBrandingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::ImportClientBrandingResponsePrivate
 * \brief The ImportClientBrandingResponsePrivate class provides private implementation for ImportClientBrandingResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ImportClientBrandingResponsePrivate object with public implementation \a q.
 */
ImportClientBrandingResponsePrivate::ImportClientBrandingResponsePrivate(
    ImportClientBrandingResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces ImportClientBranding response element from \a xml.
 */
void ImportClientBrandingResponsePrivate::parseImportClientBrandingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportClientBrandingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
